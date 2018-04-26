function [ ] = moveScorbot( scorbot, positions, gripper, offsets )
%MOVESCORBOT Move the Scorbot to the positions given
%   positions: Array of positions
%   gripper: Array of situation of the gripper
    fprintf('Press any key to start picking-and-placing.\n');
    pause;
    % Length of the positions array
    normal_speed = 100;
    caution_speed = input('Set the caution speed(Less than 15%): ');
    for j = 1:3
        for i = 1:6
            if i==3
                pos = 1;
            elseif i == 1 || i == 2
                pos = i;
            elseif i == 4|| i == 6
                pos = 3;
            else
                pos = 4;
            end
            if j == 3
                new_position = positions(1,pos);
                if pos == 1 || pos == 2
                    new_position = scorbot.changePosRoll(positions(1,pos), 900);
                    new_position = scorbot.changePosXYZ(new_position,[new_position.xyz(1)+offsets(j),new_position.xyz(2),new_position.xyz(3)-300]);
                elseif pos == 3
                     new_position = scorbot.changePosXYZ(new_position,[new_position.xyz(1)-offsets(j+1),new_position.xyz(2),new_position.xyz(3)]);
                else
                    new_position = scorbot.changePosXYZ(new_position,[new_position.xyz(1)-offsets(j+1),new_position.xyz(2),new_position.xyz(3)+550]);
                end
            else
                if pos==1 || pos==2
                    new_position = scorbot.changePosXYZ(positions(1,pos),[positions(1,pos).xyz(1),positions(1,pos).xyz(2)+offsets(j),positions(1,pos).xyz(3)]);
                else
                    new_position = scorbot.changePosXYZ(positions(1,pos),[positions(1,pos).xyz(1)-offsets(j),positions(1,pos).xyz(2),positions(1,pos).xyz(3)]);
                end
            end
            if i == 2 || i == 3 || i == 5 || i == 6
                scorbot.changeSpeed(caution_speed);
            else
                scorbot.changeSpeed(normal_speed);
            end
            scorbot.move(new_position, 1);
            pause(4);
            if i == 3
                scorbot.changeGripper(gripper(2));
            elseif i == 6
                scorbot.changeGripper(gripper(4));
            elseif i < 3
                scorbot.changeGripper(gripper(i));
            else
                scorbot.changeGripper(gripper(pos));
            end
        end
    end
end

