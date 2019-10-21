#lang racket
; problem 10
(define (fib n)
  (if (= n 1)
    0
    (if (= n 2)
        1
    (+ (fib (- n 1)) (fib (- n 2))))))

(define (fib-square n)
  (* (fib n) (fib n)))

(define (fib-squares n)
  (if (equal? n 0) (list 0)
      (append (fib-squares (- n 1)) (list(fib-square ( + 1 n))) )            
      )
  )
      
      