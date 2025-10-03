asect 0
ldi r0, a
ld r0, r0
ldi r1, b
ld r1, r1
add r0, r1
ldi r0, c
st r0, r1

inputs>
c: ds 1
a: dc 15
b: dc 26
endinputs>
end