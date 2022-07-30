clc;
clear;


store =[];
for ii = 2:100
    for jj = 2:100
        
        store = [store, ii^jj];
        
    end 
end

n_unique = length(unique(store));

disp(["Number of unique powers:", n_unique]);

