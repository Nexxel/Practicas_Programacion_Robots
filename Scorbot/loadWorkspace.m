function [ positions_output, gripper_output ] = loadWorkspace( )
%LOADWORSKPACE Load a given workspace
%   Detailed explanation goes here
    fichero_input = input('Introduce the name of the file you want to charge(without the .mat): ');
    fichero_input = strcat(char(fichero_input), '.mat');
    output = load(fichero_input, 'positions', 'gripper');
    positions_output = output.positions;
    gripper_output = output.gripper;
end

