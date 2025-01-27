# Write your MySQL query statement below
select customer_id, count(*) AS count_no_trans FROM Visits 
where visit_id NOT IN 
(select visit_id from Transactions) 
group by customer_id