function pinta(poses, tam)
%     close all; figure();
%     for i = 1:size(poses)
%         theta = poses(i, 3);
%         disp(theta)
%         line([poses(i,1),poses(i,2)],[poses(i,1)*cos(theta)+tam,poses(i,2)*sin(theta)+tam]);
%     end
    
    [nf, nc] = size(poses);
    figure;
    grid;
    hold on;
    for f = 1:nf
        plot(poses(f,1), poses(f,2), '*b');
        ox = poses(f,1)+tam*cos(poses(f,3));
        oy = poses(f,2)+tam*sin(poses(f,3));
        plot([poses(f,1), ox], [poses(f,2),oy], '-r');
    end

end

