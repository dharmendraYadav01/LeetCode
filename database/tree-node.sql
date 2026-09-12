# Write your MySQL query statement below
Select id , 
    Case when p_id is NULL then 'Root'
    when id in(
        select p_id from tree
    )then 'Inner' -- if it is inner
    else 'Leaf'
End as type from Tree;