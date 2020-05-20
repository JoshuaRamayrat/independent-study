x = [1 2 3 5 7 10]';
y = [109 149 149 191 213 224]';

plot(x, y, 'ko');
xlabel('Incubation, x');
ylabel('Biochemical oxygen demand, y');

% Weight column matrix:
w = [1 1 5 5 5 5]';

% Fitting a scaled exponential curve that levels as x -> infinity.
modelFun = @(b, x) b(1).*(1-exp(-b(2).*x));

start = [240; .5];

% Model fitting without weights
nlm = fitnlm(x, y, modelFun, start);
xx = linspace(0, 12)';
line(xx, predict(nlm, xx), 'linestyle', '--', 'color', 'k')

% Model fitting with weights
wnlm = fitnlm(x, y, modelFun, start, 'Weight', w)
line(xx, predict(wnlm, xx), 'color', 'b')

% Estimated population standard deviation - describes the average variation
% for a standard observation with a weight
wnlm.RMSE

% Estimate of the precision of the model fit. 
% computing confidence intervals for parameter standard errors.
coefCI(wnlm)

% Estimating the reponse curve:
