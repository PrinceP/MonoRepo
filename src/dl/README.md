## Logistic Regression Explained
----------------
Binary Classification problem, where the output is either 0 or 1

Denoted by following equation

<!-- $\hat{y} = \sigma(w^Tx + b)$ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/w8QE1nMA8S.svg">
----------------
where 

Input

> <!-- $x$ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/rlLHXeFd6j.svg">

Sigmoid function    

> <!-- $\sigma(z) = \dfrac{1}{1+e^{-z}}$ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/h9OBEusNBn.svg">

Prediction  

> <!-- $\hat{y}$ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/yvWWJ38wuY.svg">

Weights and bias

> <!-- $w$ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/b82zyaWpZ8.svg"> , <!-- $b$ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/EL868hFGeq.svg"> 

---------------

Loss (error) function

<!-- $L(\hat{y}, y) = - (y \log(\hat{y}) + (1-y) \log(1 - \hat{y}))$ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/ZCewfelmlr.svg">
---------------
Cost function

<!-- $J(w, b) = \dfrac{1}{m} \sum_{i=1}^{m} L(\hat{y}^i, y^i) $ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/SFn3rq9r7c.svg">
---------------
Gradient Descent

> Repeat 
>    
> <!-- $w = w - \alpha \dfrac{d J(w)}{dw} $ --> <img style="transform: translateY(0.1em); background: white;" src="../../svg/2z2rnFbZaT.svg">
where learning rate is alpha



