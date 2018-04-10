function [ positions, gripper ] = getAndSavePositions( scorbot )
%GETANDSAVEPOSITIONS Get the positions for the Scorbot to follow and save them 
%   positions: Array of positions for the Scorbot to follow.
    positions = []; gripper = [];
	fprintf('----> Teach the robot where is the location for picking items and press Enter to finish.\n\n');
	in = 1;
    while in
        suministro=scorbot.pendant();
        positions = [positions suministro];
        open_or_close = input('Introduce 1 for open the gripper or 0 in other case: ');
        gripper = [gripper open_or_close];
        in = input('Introduce un número distinto de 0 para continuar: ');
    end
    %% Save positions
    ok = input('Introduce 1 to save these positions and 0 in other case: ');
    if ok == 1
        fichero_output = input('Introduce the name of the file where you want to save the positions (Without the .mat', 'scorbot');
        fichero_output = strcat(fichero_output, '.mat');
        save(fichero_output, positions, gripper);
    end
end

