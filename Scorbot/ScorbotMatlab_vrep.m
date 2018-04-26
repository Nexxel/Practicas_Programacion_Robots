clear;
close all;

scorbot=Scorbot(Scorbot.MODEVREP)
scorbot.home;

teach = input('Introduce 1 if you want to teach the Scorbot or 0 in other case: ');
if (~teach)
    [positions, gripper] = loadWorkspace();
else
    [positions, gripper] = getAndSavePositions(scorbot);
end
 
%**************
% START PROGRAM
%**************
offsets = [0 500 1500 250];
moveScorbot(scorbot, positions, gripper, offsets);
