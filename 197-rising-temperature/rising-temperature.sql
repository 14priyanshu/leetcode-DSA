# Write your MySQL query statement below
select w1.Id
from Weather as w1,Weather as w2
Where datediff(w1.recordDate,w2.recordDate)=1 and w1.Temperature>w2.Temperature
