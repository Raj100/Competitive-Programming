# # Write a Python Program to Estimate the probability that in a group of 23 people, at least two share the same birthday (ignoring leap years)
import random
trials=10000
n=23
l=[i for i in range(1,366)]
p=0
for j in range(trials):
    r=0
    s=set()
    for i in range(n):
        date=(random.choice(l))
        if date in s:
            r+=1
        else:
            s.add(date)
    if r>0:
        p+=1


print("Probability: ",p/trials)
print(f"Probability Percentage: {(p*100)/trials}%")

import random
import matplotlib.pyplot as plt

def birthday_probability(n_people, trials=10000):
    """Estimate probability that at least two share a birthday."""
    success = 0
    for _ in range(trials):
        birthdays = set()
        for _ in range(n_people):
            b = random.randint(1, 365)
            if b in birthdays:
                success += 1
                break
            birthdays.add(b)
    return success / trials

# Compute probability for 1..60 people
group_sizes = range(1, 61)
probs = [birthday_probability(n) for n in group_sizes]

print(f"Probability (23 people): {probs[22]:.4f} ({probs[22]*100:.2f}%)")

# --- Plot ---
plt.plot(group_sizes, probs, marker="o", color="purple")
plt.axvline(23, color="red", linestyle="--", label="23 people")
plt.axhline(0.5, color="gray", linestyle="--", label="50% threshold")
plt.title("Birthday Paradox Probability Curve")
plt.xlabel("Number of People in the Room")
plt.ylabel("Probability of Shared Birthday")
plt.legend()
plt.grid(True)
plt.show()
