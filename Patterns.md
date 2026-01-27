# Arrays and Hashing

## Used when:
- You need **fast lookups** (Set has lookup of **O(1)**)
- **Ordering is not important**
- You want **optimisation from O(n log n) or O(n**2) to O(n)**

## Key Ideas:
- Use **set** when you need to **remove duplicates**
- For **“Top K” elements** problems, think about **heaps**
- Use **prefix / suffix arrays** when *aas paas ke numbers ke saath kuch krna ho*
- In **row / column / box** type problems, use **bitmasks** instead of hash arrays

## Mistakes I do:
- Do not sort **aankh band krke** - think about **hashing first**
- Using **arrays instead of map/set**
- Overwriting state in bitmasking (**using `=` instead of `|=`**)
- Using **full sort** instead of **Top K**
- Not identifying **valid start** in the longest consecutive sequence problem

# Two Pointers

## Used when:
- Array is **sorted** or can be **sorted**
- You need to find **pairs or triplets** (Two Sum, Three Sum)
- You want to reduce **O(n²) → O(n)** after sorting
- You are working with **boundaries**
- You need to explore **all possibilities efficiently** from both ends
- The problem has a **monotonic property** (moving pointers in one direction makes sense)

---

## Key Ideas:
- Use **two indices** instead of nested loops
- Common pointer placements:
  - `left = 0`, `right = n-1`
  - or `left = i+1`, `right = n-1` after fixing one element
- Move pointers based on condition:
  - `sum < target` → move `left`
  - `sum > target` → move `right`
  - valid answer → move **both** but **take care of duplicates**
- Always move the pointer that is:
  - **blocking improvement**
  - **limiting the answer** (smaller height / smaller value)

---

## Important Optimisations:
- **Early break**
  - If sorted array and current value makes solution impossible
- **Skip duplicates logically**
  - Skip duplicate fixed index (`i`)
  - Skip duplicate `left` and `right` after pushing answer
- Avoid using `set` when duplicates can be skipped using pointers

---

## Mistakes I do:
- Forgetting **early break** conditions
- Using **set** to remove duplicates instead of pointer logic
- Not skipping duplicate `i`, `left`, or `right`
- Moving the **wrong pointer**
- Missing optimisation opportunities after finding a valid answer
