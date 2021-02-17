    function inout_sig = create_data(logd)
    u = logd.getElement(2).Values.Data;
    y = logd.getElement(1).Values.Data;
    inout_sig = iddata(y,u,0.01)