# Write your MySQL query statement below
SELECT name as Customers
FROM Customers C
WHERE C.Id NOT IN (SELECT O.CustomerId from Orders O)
