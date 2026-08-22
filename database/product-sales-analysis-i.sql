# Write your MySQL query statement below

-- 1. if you use "on" or "where" with inner join or with join only then it's correct no problem
-- 2.if you use "on" or "where" with left join or with other join then it gives error.

-- A=> select p.product_name , s.year , s.price from Sales s join Product p where s.product_id = p.product_id ;
-- B=>
select p.product_name , s.year , s.price from Sales s inner join Product p on s.product_id = p.product_id ;