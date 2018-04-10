clear;
close all;

s=Scorbot(Scorbot.MODEVREP)
s.home;

teach = input('Introduce teach: ');
if (~teach)
    load('ficheropos.mat');
else
    positions = [];
	fprintf('----> Teach the robot where is the location for picking items and press Enter to finish.\n\n');
	in = 1;
    while in ~= 0
        suministro=s.pendant();
        positions = [positions suministro];
        in = input('Introduce un número distinto de 0 para continuar: ');
    end
    ok = input('¿Quieres guardar estas posiciones?\n\t0 para no, 1 para sí: ');
    if ok == 1
        save('ficheropos.mat', positions);
    end
end
 
%**************
% START PROGRAM
%**************

fprintf('Press any key to start picking-and-placing.\n');
len = size(positions,2);
speed = input('Introduce the speed: ');
s.changeSpeed(speed);
offset = 1100;
for j = 1:3
    for i = 1:len
        if i==4 || i==len-1
            positions(1,i) = s.changePosXYZ(positions(1,i),[positions(1,i).xyz(1)+offset*(j-1) positions(1,i).xyz(2) positions(1,i).xyz(3)]);
            s.changeGripper(1);
        else
            s.changeGripper(0);
        end
        s.move(positions(1,i), 1);
    end
end
