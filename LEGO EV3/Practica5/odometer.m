function [x1,y1,w1]  = odometer( encl, encr, t )

    time  = double(t);
    enc_l = double(encl);
    enc_r = double(encr);

    % define constants
    persistent data;
    persistent D R;
    persistent x0 y0 w0 t0 prev_enc_l prev_enc_r;
    if( isempty(D) )
        file = fopen('/home/root/lms2012/prjs/mw/mylog.txt','r');
        data = fscanf(file,'%f %f %f %f %f %f', [6 Inf]);
        D = 0.117;
        R = 0.027;
        x0 = 0;
        y0 = 0;
        w0 = 0;
        t0 = time;
        prev_enc_l = enc_l;
        prev_enc_r = enc_r;
    else
        delta_encl = enc_l - prev_enc_l;
        delta_encr = enc_r - prev_enc_r;

        x1 = ((delta_encl * R + delta_encr * R) / 2) * cos(w0);
        y1 = ((delta_encl * R + delta_encr * R) / 2) * sin(w0);
        w1 = ((delta_encr * R - delta_encl * R) / D);

        x0 = x1;
        y0 = y1;
        w0 = w1;
        t0 = time;
        prev_enc_l = enc_l;
        prev_enc_r = enc_r;
    end
end