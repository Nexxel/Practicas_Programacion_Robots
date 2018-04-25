clear;
close all;

scorbot=Scorbot(Scorbot.MODEREAL)
scorbot.home;

teach = input('Introduce 1 if you want to teach the Scorbot or 0 in other case: ');
if (~teach)
    [positions, gripper] = loadWorkspace();
else
    [positions, gripper] = getAndSavePositions_real(scorbot);
end
 
%**************
% START PROGRAM
%**************
offsets = [0 500 500 250];
moveScorbot(scorbot, positions, gripper, offsets);
