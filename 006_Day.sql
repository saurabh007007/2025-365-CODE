# Write your MySQL query statement below
select en.unique_id as unique_id ,e.name as name from Employees as e left join EmployeeUNI en on e.id=en.id;
