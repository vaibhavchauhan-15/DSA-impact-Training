import os

# Define the base path where folders will be created
base_path = r"C:\Users\VAIBHAV CHAUHAN\Downloads\DSA impact Training"

# Create folders from Lecture 2 to Lecture 20
for i in range(2, 21):
    folder_name = f"Lecture{i}"
    folder_path = os.path.join(base_path, folder_name)
    
    try:
        # Create the folder if it doesn't exist
        if not os.path.exists(folder_path):
            os.makedirs(folder_path)
            print(f"Created folder: {folder_name}")
        else:
            print(f"Folder already exists: {folder_name}")
    except Exception as e:
        print(f"Error creating folder {folder_name}: {str(e)}")