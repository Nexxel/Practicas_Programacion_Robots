function [ positions, gripper ] = getAndSavePositions( scorbot )
%GETANDSAVEPOSITIONS Get the positions for the Scorbot to follow and save them 
%   positions: Array of positions for the Scorbot to follow.
    positions = []; gripper = [];
	fprintf('----> Teach the robot where are each of the four locations you need, pressing Enter on each position to save it.\n\n');
    for i = 1:4
        suministro=scorbot.pendant();
        positions = [positions suministro];
        open_or_close = input('Introduce 1 the gripper must be open or 0 in other case: ');
        gripper = [gripper open_or_close];
    end
    %% Save positions
    ok = input('Introduce 1 to save these positions and 0 in other case: ');
    if ok == 1
        fichero_output = input('Introduce the name of the file where you want to save the positions (Without the .mat): ', 's');
        fichero_output = strcat(fichero_output, '.mat');
        save(fichero_output, positions, gripper);
    end
end

