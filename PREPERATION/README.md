# PREPERATION GUIDE

### First things first

- An important assessment is to chalk out the time period for preparation. Software interviews are fairly difficult in senior positions in big companies. They also involve a fair bit of luck. Until you are solving LeetCode or HackerRank challenges daily, it's best to give yourself at-least one month or more
- It's important to realize that the eventual goal is to become a good engineer, not rather someone who is only good at cracking interviews.

## Topics

### Sofware engineering topics

- I prepared a list of topic I would need revision or practice on.

| Category             | Topics                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| -------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Data structures      | Arrays, LinkedList, Queues, Stack, HashTable, Graph, Bloom filters, Binary tree, Binary search tree, B-trees, Red-black trees, Disjoin sets, Heaps, Van emde boas trees, Fenwick trees, Steiner tree                                                                                                                                                                                                                                                    |
| Maths                | Basic probability and statistics, common mathematical series (such as geometric series)                                                                                                                                                                                                                                                                                                                                                                 |
| Algorithmic concepts | Time & space complexities, recurrence relations and master theorem                                                                                                                                                                                                                                                                                                                                                                                      |
| Algorithms           | All sortation algorithms (quick sort, merge sort, heap sort, insertion sort, bubble sort, counting sort, radix sort), Divide & conquer algorithms, Dynamic programming (top-down, 1-D and 2-D memoization), approximation algorithms, Greedy algorithms, Pattern matching, Recursion and backtracking, NP complexity classes, Game theory related algorithms, Linear programming, basics of randomized algorithms                                       |
| Operating systems    | Process scheduling, process synchronization and deadlocks, memory management, file system management, user-space processes and threading etc.                                                                                                                                                                                                                                                                                                           |
| Databases            | Relation algebra, Functional decomposition, ER schema design etc. Database usage Concepts (such as ACID, BASE, CAP theorem etc.), Databases access patterns, Partitioning, Sharding, NoSQL databases (deep diving into one), Database locking and strategies, Concurrency controls, Database isolation levels, Databases transactions, Indexing, full-text search, time series databases, Views / materalized views, replication (WAN replication) etc. |
| Networks             | OSI model, HTTP/1.1 and HTTP/2 protocol, web-socket communication, TCP/IP internals, SSL/TLS, Checksums and error-correcting mechanisms,                                                                                                                                                                                                                                                                                                                |
| Distributed systems  | Two-general's problem, Byzantine failures, Consensus protocols (such as Paxos, Raft etc.), Distributed transactions (2-phase commit, SAGA etc.), Distributed locking, Leader election, Partition tolerance, Distributed state machines, Distributed file systems, Distributed hash-table etc.                                                                                                                                                           |
| Compilers            | Compilation lifecycle, AST, JIT compilation, Key optimizations (such as Tail call optimization)                                                                                                                                                                                                                                                                                                                                                         |
| OOPS                 | Content Cell                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| Content Cell         | Key design patterns (factory, abstract factory, visitor, singleton, strategy, command etc.), heavy practice on OOPS modelling                                                                                                                                                                                                                                                                                                                           |
| Programming language | Erlang, Erlang BEAM VM internals, Python deep-dive, functional programming vs OOPS vs imperative, niche concepts such as (futures, closures, referential transparency etc.), Garbage collection                                                                                                                                                                                                                                                         |
| Architecture         | Microservices, n-tier (details of MVC, MVVM etc.) Microservice Architecture Orchestration, Choreography, Distributed tracing, reporting, instrumentation, Service discovery and service mesh, API gateways, authentication, Eventing, Common anti-patterns, Security                                                                                                                                                                                    |

System design | Requirement collection (functional and non-functional), performance and load budgeting, Caching, Load-balancing, Deployment, Instrumentation, API and message communication, message queues, Logging, Infrastructure management.
Caching | Caching types (L1 cache, in-memory caches, distributed caches, CDN), caching strategies (write-through, write-back etc.), cache boot strategies, Eviction strategies (LRU, MRU etc.), manual management of caches in production
Load balancing | L3, L4, L7 load balancing, API gateway and authentication, SSL termination, request forwarding vs reverse proxy, Load balancing strategies, Direct server return, DNS load balancing, Rate limiting

Machine learning | Basic statistical machine learning algorithms (supervised / unsupervised), basic neural networks, high level concepts of deep learning networks
Miscellaneous | Finite state automata, Performance numbers (disk IOPS, network bandwidth, database transaction benchmarks, HTTP server benchmarks), MapReduce, Serialization/Marshalling, Concurrency controls (mutex, semaphores), Lockless data structures, Operational transformation algorithms

## Other topics

- I had to prepare other two dimensions

Experience related questions: related to past projects, hard problems that one might have solved so on and so forth
Personality related questions: related to working style, people management and leadership style, conflict resolution skills

## Time allocation

Of all the topics that have been mentioned, it's important to allocate time properly to maximize impact. A number of interviews will focus on problem-solving, hence solving for different kind of algorithm is more important than being thorough with compiler design

## Learning style

I am a huge fan of Fyenman learning technique. My usual approach was

1. Pick a topic
2. Find out a credible learning source (such as video lectures, books). Now a days, there are incredible lecture series on YouTube or Udemy
3. Do as much internet research on concepts which are under-prepared. Deep-dive into those concepts until you are thorough on them
4. Write a mind-map and/or explain it to a panda in your house
5. Additionally, specifically for algorithms and system-design

```
Practice as much as you can on LeetCode and/or HackerRank
Practice end-to-end system design on variety of software's out there
```

## Practicing system design

- It's best if you can get a peer to review your design on whiteboard or while you explain to them. I tried to categorize many applications and practice those categories so I am covered

## Websites

| Category     | Examples                                                           |
| ------------ | ------------------------------------------------------------------ |
| Online games | Counter-strike, DOTA 2 etc.                                        |
| Social media | Facebook, Instagram                                                |
| Utilities    | Gmail, Reddit, Swiggy, Uber, Github, New York Times, Amazon, Alexa |
| Chat         | Whatsapp, Facebook messenger, Slack                                |
| Streaming    | YouTube streaming                                                  |
| Video        | Youtube                                                            |
| VoIP         | WhatsApp, FaceTime                                                 |
| Ticketing    | Airline booking system                                             |

## Software

SQL databases Postgres, MySQL <br>
NoSQL databases Redis, Cassandra, MongoDB, Influx<br>
Operating systems Linux kernel<br>
Web servers nginx, NodeJS<br>

## Learning resources

I took the interview preparation kit of HackerRank and almost solved 50 percent of it. It was immensely useful for brushing up with concepts

- Leetcode Premimum was helpful in having mock tests of various difficulty levels.
- Someone on LeetCode summarized common patterns of algorithms that are asked. It's a good grouping of problems
- Algorithms by Abdul Bari is phenomenally well-explained course on algorithms. Highly recommended.
- I took couple of courses on Udemy for revising distributed systems and operating systems. They were quite good
- On software architecture, this was a quick primer playlist on Youtube by Mark Richards
- It's best to reference videos of different conference where representations from different companies explain how they were able to solve key problems (e.g. SRECon Americas)
