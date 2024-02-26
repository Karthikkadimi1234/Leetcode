
# Write your MySQL query statement below
select e.name as Employee from employee as E
where e.salary>(select salary from employee where e.managerId=id)
and e.managerId is not null