-- your code goes here
select level,sum(experience_points) from players 
group by level;
