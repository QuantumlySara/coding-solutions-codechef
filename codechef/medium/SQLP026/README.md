# SQLP026

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Calculate the total experience points for all the players.

### Task
- Write a query to calculate the total experience points for each player's level.
### Expected Output Format
Level	SUM(experience_points)
	
### Dataset tables
- players
- characters
- quests
- character_quests
- items
- character_items

## Solution

**Language:** SQL  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-24T11:59:55.042Z  

```sql
-- your code goes here
select level,sum(experience_points) from players 
group by level;

```

---

[View on CodeChef](https://www.codechef.com/problems/SQLP026)