# March CodeChef Starters 2021
# Problem1

There is only 1 TV in the common room, and as luck would have it, both the El Clasico football match and the India-Pakistan cricket match are happening simultaneously.

There is one football fan who is looking at the live commentary online and will scream whenever an 'important' event takes place in the El Clasico. Similarly, there is a cricket fan who will do so for every important event in the cricket match.

You are given two arrays - F1,F2,…,Fn, which denote the times when an important event happens in the football match. And similarly C1,C2,…,Cm for cricket. You sadly have the remote in hand. You start out by watching the El Clasico. But whenever an Important event happens in the sport which isn't on the TV right now, you will be forced to switch to that sport's channel, and this continues, i.e., you switch channels if and only if when an important event in the other sport happens. Find the total number of times you will have to switch between the channels.

 # # Input:
First line will contain T, number of testcases. Then the testcases follow.<br /> 
Each testcase contains of 3 lines of input.<br /> 
First line contain 2 space separated integers N and M, number of important events in football and cricket match respectively.<br /> 
Second line contain N space separated integers Fi, where the ith index represents ith important event in the football match.<br />  
Third line contain M space separated integers Ci, where the ith index represents ith important event in the cricket match.<br /> 
# # Output:<br />
For each testcase, output in a single line answer to the problem.<br /> 

Constraints <br /> 
1≤N,M≤2.5∗104 <br /> 
1≤Fi,Ci≤109 <br /> 
Fi>Fi−1 ∀i>0 <br /> 
Ci>Ci−1 ∀i>0 <br /> 
Fi != Cj ∀i,j <br /> 
Sum of N over all tests is atmost 2∗105 <br /> 
Sum of M over all tests is atmost 2∗105 <br /> 
Sample Input: <br /> 
3 <br /> 
2 2 <br /> 
1 3 <br /> 
2 4 <br /> 
3 1 <br /> 
100 200 300 <br /> 
1 <br /> 
1 2 <br /> 
1 <br /> 
100 200 <br /> 
Sample Output: <br /> 
3 <br /> 
2 <br /> 
1 <br /> 
