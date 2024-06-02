def customer_inquiry_chatbot(user_input):
    inquiries = {
        "product": "Our products include electronics, clothing, and home goods. Is there a specific product you're looking for?",
        "order": "To track your order or inquire about your order status, please provide your order number.",
        "shipping": "Our standard shipping takes 3-5 business days. For expedited shipping options, please contact our customer support.",
        "return": "For returns, please visit our returns page on the website or contact our customer service for assistance.",
        "contact": "You can reach our customer support team at support@example.com or call us at 123-456-7890.",
        "default": "I'm sorry, I didn't understand that. How can I assist you? Please specify your inquiry."
    }

    user_input_lower = user_input.lower()

    if "product" in user_input_lower:
        return inquiries["product"]
    elif "order" in user_input_lower:
        return inquiries["order"]
    elif "shipping" in user_input_lower:
        return inquiries["shipping"]
    elif "return" in user_input_lower:
        return inquiries["return"]
    elif "contact" in user_input_lower:
        return inquiries["contact"]
    else:
        return inquiries["default"]

if __name__ == "__main__":
    print("Customer Inquiry Chatbot: Hello! How can I help you today? Type 'exit' to end the conversation.")

    while True:
        user_input = input("You: ")

        if user_input.lower() == 'exit':
            print("Customer Inquiry Chatbot: Goodbye!")
            break

        response = customer_inquiry_chatbot(user_input)
        print("Customer Inquiry Chatbot:", response)
