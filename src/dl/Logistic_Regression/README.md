## Logistic Regression Explained
----------------
Binary Classification problem, where the output is either 0 or 1

Denoted by following equation

<!-- $\hat{y} = \sigma(w^Tx + b)$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/w8QE1nMA8S.svg">
----------------
where 

Input

> <!-- $x$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/rlLHXeFd6j.svg">

Sigmoid function    

> <!-- $\sigma(z) = \dfrac{1}{1+e^{-z}}$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/h9OBEusNBn.svg">

Prediction  

> <!-- $\hat{y}$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/yvWWJ38wuY.svg">

Weights and bias

> <!-- $w$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/b82zyaWpZ8.svg"> , <!-- $b$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/EL868hFGeq.svg"> 

---------------

Loss (error) function

<!-- $L(\hat{y}, y) = - (y \log(\hat{y}) + (1-y) \log(1 - \hat{y}))$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/ZCewfelmlr.svg">
---------------
Cost function

<!-- $J(w, b) = \dfrac{1}{m} \sum_{i=1}^{m} L(\hat{y}^i, y^i) $ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/SFn3rq9r7c.svg">
---------------
Gradient Descent

> Repeat 
>    
> <!-- $w = w - \alpha \dfrac{d J(w)}{dw} $ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/2z2rnFbZaT.svg">
where learning rate is alpha

### Sigmoid Derivative

The output from sigmoid function is always from 0 to 1. As the value of input(z) increases the output value is closer to 1 and vice versa.
Lets find the derivative for this 

<!-- $
\begin{equation}
\begin{split}
\sigma(z) & = \dfrac{1}{1+e^{-z}} \\
\sigma'(z) & = d\left(\dfrac{1}{1+e^{-z}}\right)\\
where \\
d & = \dfrac{d}{dz}\\
Applying - Reciprocal\\
& = -(1+e^{-z})^{-2}.d\left(1+e^{-z}\right)\\
Applying - Linearity\\
& = -(1+e^{-z})^{-2}.\left(d(1)+d(e^{-z})\right)\\
Applying - Exponential\\
& = -(1+e^{-z})^{-2}.\left(0+e^{-z}d(-z)\right)\\
Applying - Linearity\\
& = -(1+e^{-z})^{-2}.\left(0+(e^{-z}.-1)\right)\\
& = (1+e^{-z})^{-2}.\left(e^{-z}\right)\\
Simplifying\\
& = \dfrac{1}{1+e^{-z}}.\left(1 - \dfrac{1}{1+e^{-z}}\right)\\
& = \sigma(z).(1 - \sigma(z))\\
\end{split}
\end{equation}
$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/58bzxjY8rU.svg">

> Reciprocal [rule](https://www.youtube.com/watch?v=jFJ1kgzDuWY)

> Exponential [rule](https://www.khanacademy.org/math/ap-calculus-ab/ab-differentiation-2-new/ab-3-1b/v/exponential-functions-differentiation)

> Linearity [rule](https://en.wikipedia.org/wiki/Linearity_of_differentiation)


### Logistic Regression Derivative

<img src="../../../svg/LRD.png">

<!-- $
\begin{split}
Step - 1:
\dfrac{dL}{da}\\
\\
L(a, y) & = - (y \log(a) + (1-y) \log(1 - a)) \\
Applying - Linearity\\
dL(a, y) & = - (y . \dfrac{1}{a} + (1-y) . \dfrac{1}{1-a} . -1) \\
\\
dL(a, y) & = \dfrac{a-y}{a(1-a)} \\
\end{split}
$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/tUDP3kH2cr.svg">

--------

<!-- $
\begin{split}
Step - 2:
\dfrac{da}{dz}\\
\\
Applying - Sigmoid\\
\dfrac{da}{dz} & = \sigma(z).(1 - \sigma(z)) \\
\dfrac{da}{dz} & = a.(1 - a) \\
\\
\end{split}
$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/07rDP7gfL8.svg">

---------

<!-- $
\begin{split}
Step - 3:
\dfrac{dL}{dz}\\
\\
Applying - Chain -Rule\\
\dfrac{dL}{dz} & = \dfrac{dL}{da}. \dfrac{da}{dz} \\
\dfrac{dL}{dz} & = \dfrac{a-y}{a(1-a)} . a.(1 - a) \\
& = a-y
\\
\end{split}
$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/qEOCfQA8M8.svg">

----------

### Implementing over m examples

<!-- $
\begin{split}
J =0, dw_1=0, dw_2=0, ..., db = 0\\
for: i=1 -> m\\
z^{i}&=w^Tx^{i} + b \\
a^{i}&=\sigma(z^{i})\\
J +&= - (y^{i} \log(a^{i}) + (1-y^{i}) \log(1 - a^{i}))\\
dz^{i}&=a^{i}-y^{i}\\
dw^{1}&=dw^{1}+x^{1}dz^{i}\\
dw^{2}&=dw^{2}+x^{2}dz^{i}\\
...&=...\\
db&=db+dz^{i}\\
\\
J = \dfrac{J}{m},dw_{1} = \dfrac{dw_{1}}{m},dw_{2} = \dfrac{dw_{2}}{m}, db = \dfrac{db}{m}\\
\\
\end{split}
$ --> <img style="transform: translateY(0.1em); background: gray;" src="../../../svg/hwhdUZ7aym.svg">
