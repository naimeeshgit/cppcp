const { json } = require("body-parser");
var express = require("express");
var router = express.Router();

// Load User model == Load Buyer model
const Item = require("../models/foodItem");
const Vendor = require("../models/Vendor");


router.get("/item", (req, res) => {

    const email = req.body.VendorEmail;
    Item.find({ email: email}).then(item=> {
        return res.json(item);
    });

});

module.exports = router;