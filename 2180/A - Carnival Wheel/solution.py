t = int(input())
for _ in range(t):
    l, a, b = map(int, input().split())
    
    b = b % l  # reduce b modulo l
    
    if b == 0:
        # Pointer never moves
        print(a)
        continue
    if b == 1:
        # Pointer will visit all positions 0..l-1
        print(l - 1)
        continue
    
    # Use set to store reachable positions
    positions = set()
    current = a
    while current not in positions:
        positions.add(current)
        current = (current + b) % l
    
    # Maximum prize
    print(max(positions))