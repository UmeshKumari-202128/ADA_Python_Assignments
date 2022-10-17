
Job = (input("Enter the job name: "))
Job = Job.split();
Profit = (input("Enter the profit : "))
Profit = Profit.split()
Deadline = (input("Enter the deadline : "))
Deadline = Deadline.split()

Job = [x for x in Job]
Profit = [int(x) for x in Profit]
Deadline = [int(x) for x in Deadline]

J_P_D = [(Job[i],Profit[i],Deadline[i]) for i in range(0,len(Job))]
print(J_P_D)


# sort = sorted(J_P_D,key=lambda j: j[2],reverse=True)
# n=sort[0][2]
# print(n)


# def jobSequencing(J_P_D,max_deadline):
#     sorted(J_P_D,key=lambda j: j[2],reverse=True)
#     res = []
#     for i in reversed(range(max_deadline)):  # range(max_deadline-1,-1,-1)
#          max_profit=J_P_D[0]
#          for item in J_P_D:
#             if item[2]==i+1:
#                 if item[1]>max_profit[1]:
#                     max_profit=item
#          res.append(max_profit)

#     return res

# print(jobSequencing(J_P_D,n))