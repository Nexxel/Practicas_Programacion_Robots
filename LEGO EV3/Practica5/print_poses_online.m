function print_poses_online( )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
     data = load('mypose.txt');
     for i = 1:size(data,1)
         hold on
         plot(data(i,1),data(i,2),'.y');
     end
     hold off
end

