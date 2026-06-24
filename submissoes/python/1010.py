# beecrowd | 1010 - Simple Calculate

# -*- coding: utf-8 -*-
code_p1, units_p1, price_p1 = input().split()
units_p1, price_p1 = int(units_p1), float(price_p1)

code_p2, units_p2, price_p2 = input().split()
units_p2, price_p2 = int(units_p2), float(price_p2)

total = units_p1 * price_p1 + units_p2 * price_p2

print(f"VALOR A PAGAR: R$ {total:.2f}")
