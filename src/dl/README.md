## Logistic Regression Explained
----------------
Binary Classification problem, where the output is either 0 or 1

Denoted by following equation

$\hat{y} = \sigma(w^Tx + b)$
----------------
where 

Input

> $x$

Sigmoid function    

> $\sigma(z) = \dfrac{1}{1+e^{-z}}$

Prediction  

> $\hat{y}$

Weights and bias

> $w$  and  $b$ 

---------------

Loss (error) function

$L(\hat{y}, y) = - (y \log(\hat{y}) + (1-y) \log(1 - \hat{y}))$
---------------
Cost function

$J(w, b) = \dfrac{1}{m} \sum_{i=1}^{m} L(\hat{y}^i, y^i) $
---------------
Gradient Descent

> Repeat $($
>    
> $w = w - \alpha \dfrac{d J(w)}{dw} $
>
> $)$



