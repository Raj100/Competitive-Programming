# Write a Python Program to find the probability that the sum of two dice is equal to 7
import random
n=10000
target=7
mat = [[i,j] for i in range(1,7) for j in range(1,7)] 
print(mat)
p=0
for i in range(n):
    l=random.choice(mat)
    if (l[0]+l[1])==7:
        p+=1
print("Probobility of Sum 7 : ",p/n)
print(f"Percentage Probability : {(p/n)*100}%")

# import random
# import matplotlib.pyplot as plt

# n = 10000
# target = 7
# mat = [(i, j) for i in range(1, 7) for j in range(1, 7)]

# # Count how many times each sum appears
# counts = {s: 0 for s in range(2, 13)}

# for _ in range(n):
#     d1, d2 = random.choice(mat)
#     counts[d1 + d2] += 1

# # Probability of sum = 7
# prob = counts[target] / n
# print(f"Probability of Sum {target}: {prob:.4f} ({prob*100:.2f}%)")

# # --- Plot ---
# plt.bar(counts.keys(), [v / n for v in counts.values()], color="skyblue", edgecolor="black")
# plt.axhline(prob, color="red", linestyle="--", label=f"Sum = {target} ({prob:.2%})")
# plt.title("Estimated Probability Distribution of Two Dice Sums")
# plt.xlabel("Sum of Two Dice")
# plt.ylabel("Probability")
# plt.legend()
# plt.show()
