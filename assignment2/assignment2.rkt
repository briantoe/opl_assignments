#lang racket

(define (last-element ls)
  (cond ((null? (cdr ls))
         (car ls))
  (else (last-element (cdr ls)))))


(define (fib n)
  (if (= n 1)
    0
    (if (= n 2)
        1
    (+ (fib (- n 1)) (fib (- n 2))))))

(define (fib-square n)
  (* (fib n) (fib n)))

(define (fib-squares n)
  (if (= n 0)
      (cons empty (fib n))
      (cons (fib n) (fib-squares (- n 1)) )))