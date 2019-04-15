# euler

These are answers for [Project Euler](https://projecteuler.net/) mathematical problems in the [Plan 9](https://en.wikipedia.org/wiki/Plan_9_from_Bell_Labs) dialect of C.

I have written these using the [9front](http://9front.org/) operating system, but there is no reason that they shouldn't compile on vanilla Plan 9 or [Plan 9 from User Space](https://9fans.github.io/plan9port/).

The original math problem's wording is on the top of each `.c` file as a comment.

I abuse unsigned 64-bit integers where they are not needed because I'm not very concerned with picking optimal data types for numbers in such small programs.

Running `mk` in each directory should compile an executable which determines the problem's answer. I usually test the answer's speed using the `time` command on the resulting executable.
