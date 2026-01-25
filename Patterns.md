# Arrays and Hashing

---

## Used when:
- You need **fast lookups** (Set has lookup of **O(1)**)
- **Ordering is not important**
- You want **optimisation from O(n log n) or O(n**2) to O(n)**

---

## Key Ideas:
- Use **set** when you need to **remove duplicates**
- For **“Top K” elements** problems, think about **heaps**
- Use **prefix / suffix arrays** when *aas paas ke numbers ke saath kuch krna ho*
- In **row / column / box** type problems, use **bitmasks** instead of hash arrays

---

## Mistakes I do:
- Do not sort **aankh band krke** - think about **hashing first**
- Using **arrays instead of map/set**
- Overwriting state in bitmasking (**using `=` instead of `|=`**)
- Using **full sort** instead of **Top K**
- Not identifying **valid start** in the longest consecutive sequence problem
