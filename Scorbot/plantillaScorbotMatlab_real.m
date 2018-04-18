% Inicializaci�n del robot
clear;
close all;
mirobot = Scorbot(Scorbot.MODEREAL);
mirobot.home;

disp('Introduce teach: ');
if(~teach)
    % Si las posiciones est�n almacenadas en un fichero
    load('matlab.mat');
else
    % Definici�n de posiciones
    positions = [];
    in = 1;
    while(in)
        input('Utilice la botonera para definir la posici�n de suministro de piezas y pulse Enter');
        nueva_pos = mirobot.currentPos();
        positions = [positions nueva_pos];
    end
end
% Guardar las posiciones
save('matlab.mat',positions);
% Dibujo de las posiciones
plot(posicitions, 'g*');

% C�digo de la tarea


% Home final y cierre del objeto robot
res = ScbHome(mirobot);
ScbFinish(mirobot)
