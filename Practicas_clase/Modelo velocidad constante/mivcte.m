function [ xfinal ] = mivcte( xinit, v, deltat, pasos)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
    xfinal = [xinit];
    for i = 1:pasos
        current_pos = xfinal(i,:);
        theta = current_pos(3);
        next_pos = ... 
        [...
            current_pos(1) + v(1)*deltat*cos(theta) - v(2)*deltat*sin(theta)...
            current_pos(2) + v(1)*deltat*sin(theta) + v(2)*deltat*cos(theta)...
            theta + v(3)*deltat...
        ];
        xfinal = [xfinal; next_pos];
    end
end

