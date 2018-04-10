function [ positions_output, gripper_output ] = loadWorkspace( )
%LOADWORSKPACE Load a given workspace
%   Detailed explanation goes here
    fichero_input = input('Introduce the name of the file you want to charge(without the .mat): ', 's');
    fichero_input = strcat(fichero_input, '.mat');
    [positions_output, gripper_output] = load(fichero_input, 'positions', 'gripper');
end

