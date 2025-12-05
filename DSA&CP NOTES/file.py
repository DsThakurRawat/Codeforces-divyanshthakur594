from PIL import Image

# Open images
img1 = Image.open("image.png")
img2 = Image.open("image copy.png")

# Make both images the same height (optional but usually nicer)
h = min(img1.height, img2.height)
img1 = img1.resize((int(img1.width * h / img1.height), h))
img2 = img2.resize((int(img2.width * h / img2.height), h))

# Create blank canvas for collage (side by side)
collage_width = img1.width + img2.width
collage_height = h
collage = Image.new("RGB", (collage_width, collage_height), (0, 0, 0))

# Paste images
collage.paste(img2, (0, 0))
collage.paste(img1, (img2.width, 0))

# Save result
collage.save("collage2.png")
print("Saved as collage.png")
