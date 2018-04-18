function [ ] = moveScorbot( scorbot, positions, gripper, offsets )
%MOVESCORBOT Move the Scorbot to the positions given
%   positions: Array of positions
%   gripper: Array of situation of the gripper
    fprintf('Press any key to start picking-and-placing.\n');
    pause;
    % Length of the positions array
    normal_speed = 15;
    caution_speed = input('Set the caution speed(Less than 15%): ');
    for j = 1:3
        for i = 1:4
            if j == 3 && i==3 || i==4
                if i==1 || i==2
                    new_position = scorbot.changePosXYZ(positions(1,i),[positions(1,i).xyz(1)+offsets(j),positions(1,i).xyz(2),positions(1,i).xyz(2)]);
                else
                     new_position = scorbot.changePosXYZ(positions(1,i),[positions(1,i).xyz(1),positions(1,i).xyz(2)+offsets(j+1),positions(1,i).xyz(2)]);
                end
                else
                    new_position = scorbot.changePosXYZ(positions(1,i),[positions(1,i).xyz(1),positions(1,i).xyz(2)+offsets(j),positions(1,i).xyz(2)]);
            end
            if i == 2 || i == 4
                scorbot.changeSpeed(normal_speed);
            else
                scorbot.changeSpeed(caution_speed);
            end
            scorbot.changeGripper(gripper(i));
            scorbot.move(new_position, 1);
        end
    end
end

