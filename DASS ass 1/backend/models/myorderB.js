const mongoose = require("mongoose");
const Schema = mongoose.Schema;

// Vendor Name, Food Item, Quantity, Status, Cost and Rating
// Create Schema

// Vendor Name, Food Item, Price, Rating, tags, type, addon, addonPrice

const MyOrderBSchema = new Schema({
    VendorEmail: {
        type: String,
        required: true,
    },
	BuyerEmail: {
		type: String,
		required: true,
	},
	VendorName:{
		type: Number,
		required: true
	},
    FoodName: {
        type: Number,
        required: true
    },
    Quantity: {
        type: Number,
        required: true
    },
    price: {
        type: Number,
        required: true,
    },
    rating: {
        type: Number,
        required: true
    },
	tags: [{
        type: String,
		required: false
	}],
    addon: [{
        type: String,
        required: false
    }],
    addonPrice: [{
        type: Number,
        required: false
    }]

});

module.exports = MyOrderBSchema = mongoose.model("MyOrderBuyer", MyOrderBSchema);
