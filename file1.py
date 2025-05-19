import pandas as pd 
import numpy as np
import matplotlib as pt
import matplotlib.pyplot as plt 
import seaborn as sns
#step -1 laoding and inspecting data
df = pd.read_csv("Reviews.csv")
#print(df.head(15))
# descriptive statics of Score distribution
score_count = df["Score"].value_counts().sort_index()
print(score_count)

sns.barplot(x=score_count.index, y=score_count.values, palette='viridis')
plt.xlabel('Review Score')
plt.ylabel('Number of Reviews')
plt.title('Distribution of Review Scores')
plt.show()