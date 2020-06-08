# FACEBOOK Interview Experience

- https://leetcode.com/problems/find-all-anagrams-in-a-string/
- A string / array problem involving distinct characters and window
- https://leetcode.com/problems/shortest-bridge/
- https://leetcode.com/problems/partition-equal-subset-sum/
- https://leetcode.com/problems/valid-palindrome-ii/
- https://leetcode.com/problems/kth-smallest-element-in-a-bst/
- You are given a mn grid. You are asked to generate k mines on this grid randomly. Each cell should have equal probability of k/mn of being chosen. Your algorithm should run in O(m) time.
- https://leetcode.com/problems/continuous-subarray-sum/
- Given a list of positive numbers and a target integer k, write a function to check if the array has a continuous subarray which sums to k.
- https://leetcode.com/problems/verifying-an-alien-dictionary/
- https://leetcode.com/problems/alien-dictionary/
- https://leetcode.com/problems/course-schedule/
- https://leetcode.com/problems/interval-list-intersections/
- https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
- https://leetcode.com/problems/plus-one/
- https://www.***.org/find-index-maximum-occurring-element-equal-probability/
- https://leetcode.com/problems/range-sum-of-bst/
- Similar strings ("face", "eacf") returns true if only 2 positions in the strings are swapped. Here 'f' and 'e' are swapped in the example.
- Number Of connected components in a Graph
- https://leetcode.com/problems/add-binary/
- Given two binary search trees how do we merge everything so it prints inorder. The answer I gave was to run inorder on both trees and use "merge" from merge-sort.
- https://leetcode.com/problems/valid-palindrome
- https://leetcode.com/problems/add-strings
- https://leetcode.com/problems/serialize-and-deserialize-binary-tree/
- https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree
- https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/
- https://leetcode.com/problems/binary-tree-paths
- https://leetcode.com/problems/minimum-window-substring
- How to remove duplicates from a list
- https://leetcode.com/problems/maximum-subarray
- https://leetcode.com/problems/valid-parentheses
- https://leetcode.com/problems/merge-intervals

## 2. Coding Round 1:

- https://leetcode.com/problems/insert-interval/
- https://leetcode.com/problems/convert-a-number-to-hexadecimal/
- https://leetcode.com/problems/rotate-array/
- https://leetcode.com/problems/k-closest-points-to-origin/
- https://leetcode.com/discuss/interview-question/124759/
- https://leetcode.com/problems/product-of-array-except-self
- https://leetcode.com/problems/find-all-anagrams-in-a-string/
- https://leetcode.com/problems/minimum-window-substring/
- https://www.***.org/find-closest-element-binary-search-tree/
- https://leetcode.com/problems/insert-delete-getrandom-o1/
- https://leetcode.com/problems/fraction-to-recurring-decimal/
- https://leetcode.com/problems/powx-n
- https://leetcode.com/problems/subarray-sum-equals-k
- https://leetcode.com/problems/best-time-to-buy-and-sell-stock
- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii
- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv
- https://leetcode.com/problems/add-and-search-word-data-structure-design
- https://leetcode.com/problems/sudoku-solver/
- https://leetcode.com/discuss/interview-question/338948/Facebook-or-Onsite-or-Schedule-of-Tasks
- https://leetcode.com/problems/binary-tree-maximum-path-sum
- https://leetcode.com/problems/maximum-subarray
- https://leetcode.com/problems/move-zeroes
- https://leetcode.com/problems/valid-number
- https://leetcode.com/problems/first-bad-version/

## 3. Coding Round 2:

- https://leetcode.com/problems/valid-number/
- You have an API to check if is it possible to move left, right, up, down and one more method to check if current position is the last one. Find the shortest way to the last position. You don't have any data structure - only API.
- https://leetcode.com/problems/serialize-and-deserialize-binary-tree/
- https://leetcode.com/problems/group-shifted-strings/
- https://leetcode.com/problems/task-scheduler/
- Calculate tax if Salary and Tax Brackets are given as list in the form [ [10000, 0.3],[20000, 0.2], [30000, 0.1], [null, .1]] null being rest of the salary
- Is there a way to reach (0,0) from a mXn matrix to (m-1,n-1) position and give the path.
- https://leetcode.com/problems/simplify-path/
- n-ary Tree with each node having a boolean flag. Traverse all the nodes with only boolean flag = True. Return the total distance traveled from root to all those nodes.
- https://leetcode.com/problems/product-of-array-except-self/
- https://leetcode.com/discuss/interview-question/432086/Facebook-or-Phone-Screen-or-Task-Scheduler/394783
- https://leetcode.com/problems/find-all-anagrams-in-a-string
- https://leetcode.com/problems/is-graph-bipartite
- https://leetcode.com/problems/merge-sorted-array
- https://leetcode.com/problems/maximum-subarray
- https://leetcode.com/problems/serialize-and-deserialize-binary-tree
- https://leetcode.com/problems/remove-invalid-parentheses/
- https://leetcode.com/problems/subarray-sum-equals-k/
- https://leetcode.com/problems/binary-tree-level-order-traversal/
- https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
- https://leetcode.com/problems/custom-sort-string
- https://leetcode.com/problems/read-n-characters-given-read4
- https://leetcode.com/problems/remove-invalid-parentheses
- https://leetcode.com/problems/palindrome-permutation
- https://leetcode.com/problems/max-consecutive-ones-iii
- https://leetcode.com/problems/range-sum-of-bst
- https://leetcode.com/problems/exclusive-time-of-functions
- https://leetcode.com/problems/search-in-rotated-sorted-array/
- https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

## 4. Design:

- Design Google search
- Some question related to caching and balancing. Not exactly the "design twitter" type of question, but expect to talk about different components, latency, throughput, consistency and availability.

- A remote server is not responding. Debug the issue. Needed to cover entire TCP/IP stack(fragmentation/icmp/etc) + machine metrics (vmstat,iostat,strace etc). Describe virtual memory in terms of demand paging.

- 2 machines are connected, suddenly 1 machine is responding slowly. Why ?

- We had a good discussion in which we discussed everything under the sun, from NFS being bad to Networking being wrong to Kernel running out of resources(buffer-cache/inodes/virtual memory). Interviewer was interested to know the commands that i would use (strace, lsof, readlink, cat /proc/pid etc).

- Copy some resource from N sources to M sinks. where N could be < 10 and M could be 10k/Millions etc.

- Design File Storage System. Like Dropbox, Google Drive

- Not any fancy one like design Twitter or Uber. More on scheduling service side and i designed using SQL appraoch. Discussed concuurency issues, Table schemas, composite keys etc.

- Design recommendation of celebrities to user on Instagram

- Design search for Twitter

- Design a Content publishing site with privacy restrictions.

- System Design of Uber. He liked my design. He was really nice guy, i felt he was interested in my success.

- Design a type ahead features for a website. We discussed various data structures, advantage /disadvantages. Lot of different cases, scenario to handle etc.
- Design instagram client side.
- Design a leetcode contest, leadership board system
- Design Instagram
- Design keyword search in FB Posts

There are music providers like spotify, apple music etc. Design a service for these providers to display top 10 songs played by each user. Was aked to write ER tables and API's.

Design a system like Hacker Rank for a programming contest and their ranking.

## 5. Behavioral:

- Work experience, past projects, standard "tell me about a time" questions, hypothetical scenario questions
- Usual stuff around things that I am proud of/ projects that I regret etc
- Tell me about your current role
- Tell me about a projects you are proud of
- Tell Me About A Time When You Had To Give Someone Difficult Feedback. How Did You Handle It?(What kind of feedback you give ?)
- Tell me about a time when you had a conflict with a manage and how you resolved it
- What's the most difficult/challenging problem you have had to solve?
- Which environment is best to you to work ?
- Tell about best decision in your life from childhood ? Decision that changed your life
- On which topics you want improve? What are doing to impoving on that topics ? Did you try build project on that topics ?

Thanks and happy coding!
Best of lucky :)
