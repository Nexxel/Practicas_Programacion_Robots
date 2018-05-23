function print_poses_offline( )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
    data = load('mylog.txt');
        D = 0.117;
        R = 0.027;
        x = 0;
        y = 0;
        w = 0;
        t0 = 0;

    for i = 2:size(data,1)
        time  = double(data(i,1));
        
        delta_encl = data(i,2)-data(i-1,2);
        delta_encr = data(i,3)-data(i-1,3);
        if(time == t0)
            x1 = 0;
            y1 = 0;
            w1 = 0;
        else
            x1 = ((delta_encl * R + delta_encr * R) / 2) * cosd(w);
            y1 = ((delta_encl * R + delta_encr * R) / 2) * sind(w);
            w1 = ((delta_encr * R - delta_encl * R) / D);
        end
        x = x + x1;
        y = y + y1;
        w = w + w1;
        hold on;
        plot(x,y,'or');
    end
    hold off;
end

