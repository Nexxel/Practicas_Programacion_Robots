% Inicialización del robot
clear;
close all;
mirobot = Scorbot(Scorbot.MODEREAL);
mirobot.home;

disp('Introduce teach: ');
if(~teach)
    % Si las posiciones están almacenadas en un fichero
    load('matlab.mat');
else
    % Definición de posiciones
    positions = [];
    in = 1;
    while(in)
        input('Utilice la botonera para definir la posiciï¿½n de suministro de piezas y pulse Enter');
        nueva_pos = mirobot.currentPos();
        positions = [positions nueva_pos];
    end
end
% Guardar las posiciones
save('matlab.mat',positions);
% Dibujo de las posiciones
plot(posicitions, 'g*');

% Código de la tarea


% Home final y cierre del objeto robot
res = ScbHome(mirobot);
ScbFinish(mirobot)
