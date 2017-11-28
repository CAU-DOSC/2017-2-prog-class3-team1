# README file for TEAM[3,1]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

functions information
1. void Makenode(int num)
 make new node and make pointer(next) between existing list with new node
when there is not existing list, make new node and make new list

2. int The_number_of_node()
 it returns the number of node in list. if there is no node in list, it return 0
 
3. void Printmidle()
 it print nodes of middle in list if The_number_of_node() is even, it print 2 nodes values;
 
4. void Printall()
 it print all node values in list from the front of list
 
5. void Printrev()
 it print all node values in list from the back of list to the front of list
 
6. void Deleteoddnode()
 it delete odd_th nodes in list (ex:1, 3, 5, 7 ,9 th nodes)


data type of node is struct and it consist of integer value, struct node pointer next

it is simple struct of linked_list

 Code Summary
 ctrl-z가 입력될 때까지 정수를 입력 받아 node에 저장하여 linked list를 형성한다. 
 중간값 출력, 입력값 출력, 역순 출력, 홀수 번째 정수 삭제 후 출력, 또 이들을 출력해내는 함수를 통해 각각의 결과 값을 출력한다. 
 
 
 	 UEAI	UEA
	 msyounge
	 kangmyoungseok
	 yangban123 Deleteoddnode()
	 jangdong-hun
	 Yangsuyeong
