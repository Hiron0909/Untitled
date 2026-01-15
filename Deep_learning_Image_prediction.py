image_path = "/content/dog.webp"

img = tf.keras.utils.load_img(
    image_path,
    target_size=(64, 64)   # MUST match training
)

img_array = tf.keras.utils.img_to_array(img)
img_array = tf.expand_dims(img_array, axis=0)

prediction = cnn.predict(img_array)

if prediction[0][0] > 0.5:
    print("Dog 🐶")
else:
    print("Cat 🐱")
