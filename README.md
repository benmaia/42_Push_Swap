# 42_Push_Swap

<div align="center"><br>
  <img src="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" alt="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" width="650" height="300">
</div>
</br>

> *Because Swap_push isn’t as natural*
</br>
</br>
<p> The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks. Your goal? Write a program in C called push_swap which calculates and displays on the standard output the smallest program using Push_swap instruction language that sorts the integer arguments received. Easy? We’ll see about that...</p>
<p> To use it:</p>

```bash
git clone https://github.com/benmaia/42_Push_Swap.git
```
<p> To run, use make to compile it and create the ./push_swap, and pass the arguments as intengers </p>

```bash
make && ./push_swap 0 -100 90 1042 -9 50 6 -2
```
<p> Make sure you don't repeat numbers, only use intengers (don't overflow, underflow, or use floats and doubles), put at least 1 argument and that only contains digits, or it will display an Error message!</p>
<p> To sort the numbers, we only had 2 stacks (a and b) and 4 types of movements, swap, push, rotate, and reverse rotate:</p>
<ul>
  <li><p> <code>Swap</code> as the name says swaps the position of the 2 numbers on top of the stack, you can sa (swap the a stack), sb (swap the b stack) and ss (swap both stacks at the same time).</p>
  <li><p> <code>Push</code> as the name says pop the number on top of one stack and pushes it to the top of the other stack, you can pa (pop from b, and push to a), pb (pop from a and pushes it to b).</p>
  <li><p> <code>Rotate</code> changes the top number of the stack to the bottom, and every number shifts 1 position up , you can ra (rotate the a stack), rb (rotate the b stack) and rr (rotate both stacks at the same time).</p>
  <li><p> <code>Reverse rotate</code>, does the oposite of the rotate, changes the bottom number of the stack to the top, and every number shifts 1 position down , you can rra (reverse rotate the a stack), rrb (reverse rotate the b stack) and rrr (reverse rotate both stacks at the same time).</p>
</ul>
<p> The output will be the the right movements to order the numbers</p>
<p> My algorithm takes <code>1084</code> movements to sort 100 numbers (it's a 3/5), and takes <code>6784</code> movements to sort 500 numbers (it's a 4/5).</p>  
<br>
<img src="https://cdn.discordapp.com/attachments/461563270411714561/948585612372475944/ezgif-1-27f6df9e33.gif" width="1000px" height="400px"/>
<p> The learning objectives of this project are rigor, use of C and use of basic algorithms. Especially looking at the complexity of these basic algorithms. Sorting values is simple. To sort them the fastest way possible is less simple, especially because from one integers configuration to another, the most efficient sorting algorithmcan differ.</p>
</br>
</br>
<p> Push_Swap OK ✅</p>
</br>
<p> Grade: 84% </p>
<div style="display: inline"><br>
   <img src="https://cdn.discordapp.com/attachments/461563270411714561/947116575696244736/010101.png">
</div>
