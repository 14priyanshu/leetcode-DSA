# Write your MySQL query statement below
select max(e2.salary) as SecondHighestSalary
 from Employee e1
 Inner join Employee e2 on e1.salary>e2.salary